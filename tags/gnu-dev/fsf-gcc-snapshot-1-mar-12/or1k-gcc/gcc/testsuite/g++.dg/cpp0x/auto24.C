// PR c++/48599
// { dg-options "-std=c++0x -pedantic-errors" }

int v[1];
auto (*p)[1] = &v;		// { dg-error "array of .auto" }
