; for use with helix-editor

[ (line_comment) (block_comment) ] @comment

[ "#" "+" "-" "*" "/" ] @operator
[ ".." "," ] @punctuation.delimiter

(int_literal) @constant.numeric.integer
(float_literal) @constant.numeric.float
(boolean_literal) @constant.builtin.boolean

(escape_sequence) @constant.character.escape

[ "if" "else" ] @keyword.control.conditional
[ "for" "in" ] @keyword.control.repeat
 "let"  @keyword

(ERROR) @error

