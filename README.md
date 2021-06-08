# chelper-plugin

A plugin that add c-style operators to process bit-oriented data in zeek scripts. The plugin was developed to support <A href="https://github.com/mattereppe/zeek-stego">zeek-stego</A>, but it is rather general and could be used for other projects.

## cpow(base, exp)

Exponentation function. It computes _b_ raised to the power of _exp_. The current definition is only conceived for positive integers (it takes arguments of _count_ type), and this is reflected in the prefixing "c" of its name. 

## shift_right(base, pos)

Bitwise right shift. Shift _base_ of _pos_ positions to the right, without considering the sign bit. It only works for unsigned int, hence it takes arguments of type _count_.

## left_shift(base, pos)

Bitwise left shift. Shift _base_ of _pos_ positions to the left. It only works for unsigned int, hence it takes arguments of type _count_.
