use std::{
    collections::hash_map::DefaultHasher,
    hash::{Hash, Hasher}
};

const INITIAL_NBUCKETS: usize = 1;
pub struct HashMap<K, V> {
    buckets: Vec<Vec<(K, V)>>,
    items: usize
}

impl<K, V> HashMap<K, V> 
where K: Hash + Eq
{
    pub fn new() -> Self {
        HashMap {
            buckets: Vec::new(),
            items: 0
        }
    }

    pub fn insert(&mut self, key: K, value: V) -> Option<V> {
        if self.buckets.is_empty() || self.items > 3 * self.buckets.len() / 4 {
            self.resize();
        }
        let mut hasher = DefaultHasher::new();
        key.hash(&mut hasher);
        let bucket = (hasher.finish() % self.buckets.len() as u64) as usize;
        let bucket = &mut self.buckets[bucket];
    
        for &mut (ref ekey, ref mut evalue) in bucket.iter_mut() {
            if ekey == &key {
                use std::mem;
                return Some(mem::replace(evalue, value));
            }
        }
        bucket.push((key, value));
        None
    }
    pub fn resize(&mut self) {
        let target_size = match self.buckets.len() {
            0 => INITIAL_NBUCKETS,
            n => 2 * n,
        };
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    fn insert() {
        let map = HashMap::new();
        map.insert("foo", 47);
    }
}
