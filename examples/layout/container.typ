// Test the `box` and `block` containers.

---
// Test box in paragraph.
A #box[B \ C] D.

// Test box with height.
Spaced \
#box(height: 0.5cm) \
Apart

---
// Test fr box.
Hello #box(width: 1fr, rect(height: 0.7em, width: 100%)) World

---
// Test block over multiple pages.

#set page(height: 60pt)

First!

#block[
  But, soft! what light through yonder window breaks? It is the east, and Juliet
  is the sun.
]
