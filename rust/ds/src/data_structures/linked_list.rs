use std::fmt;
use std::sync::Arc;

#[derive(Clone)]
pub struct List<T: Clone> {
    heads: Vec<Link<T>>,
}

// Can use `Rc` if single-threaded
// `lazy_static` used in tests requires `Arc` to be used 
type Link<T> = Option<Arc<Node<T>>>;

#[derive(Debug, Clone)]
pub struct Node<T: Clone> {
    elem: T,
    next: Link<T>,
}

impl<T: Clone> List<T> {
    pub fn new() -> Self {
        Self { heads: vec![None] }
    }

    pub fn version(&self, version: usize) -> &Link<T> {
        &self.heads[version]
    }

    pub fn num_versions(&self) -> usize {
        self.heads.len()
    }

    pub fn latest(&self) -> &Link<T> {
        &self.heads[self.num_versions() - 1]
    }

    pub fn tail(&self, version: usize) -> &Link<T> {
        let mut link = self.version(version);
        let mut prev = link;
        while let Some(node) = link {
            prev = link;
            link = &node.next;
        }
        prev
    }
    pub fn tail_latest(&self) -> &Link<T> {
        self.tail(self.heads.len() - 1)
    }

    pub 
}
