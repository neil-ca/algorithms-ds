use std::collections::HashMap;

fn main() {
    let mut book_reviews = HashMap::new();
    book_reviews.insert("Grimms' Fairy Tales", "Masterpiece");
    book_reviews.insert("Pride and Prejudice", "Enjoyable");

    if !book_reviews.contains_key("Les Misérables") {
        println!("We've got {} reviews but not that", book_reviews.len());
    }

    book_reviews.remove("Pride and Prejudice");

    let to_find = ["Pride and Prejudice", "Grimms' Fairy Tales"];
    for book in &to_find {
        match book_reviews.get(book) {
            Some(review) => println!("{}: {}", book, review),
            None => println!("{} is unreviewed", book)
        }
    }
}
