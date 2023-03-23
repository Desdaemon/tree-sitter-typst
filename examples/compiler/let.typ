// Test let bindings.

---
// Automatically initialized with none.
#let x
#test(x, none)

// Manually initialized with one.
#let z = 1
#test(z, 1)

// Syntax sugar for function definitions.
#let fill = conifer
#let f(body) = rect(width: 2cm, fill: fill, inset: 5pt, body)
#f[Hi!]

---
// Termination.

// Terminated by line break.
#let v1 = 1
One

// Terminated by semicolon.
#let v2 = 2; Two

// Terminated by semicolon and line break.
#let v3 = 3;
Three

#test(v1, 1)
#test(v2, 2)
#test(v3, 3)

---
// Error: 5 expected identifier
#let

// Error: 6 expected identifier
#{let}

// Error: 5 expected identifier
// Error: 5 expected semicolon or line break
#let "v"

// Error: 7 expected semicolon or line break
#let v 1

// Error: 9 expected expression
#let v =

// Error: 5 expected identifier
// Error: 5 expected semicolon or line break
#let "v" = 1

// Terminated because expression ends.
// Error: 12 expected semicolon or line break
#let v4 = 4 Four

// Terminated by semicolon even though we are in a paren group.
// Error: 18 expected expression
// Error: 18 expected closing paren
#let v5 = (1, 2 + ; Five

---
// Error: 13 expected equals sign
#let func(x)

// Error: 15 expected expression
#let func(x) =
