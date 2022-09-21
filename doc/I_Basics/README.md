# Basics

“What is constant?” It’s always what is in front of the const qualifier!

```c++
int const N = 100;

int* const bookmark; // the pointer cannot change, but the value pointed to can
```

## Function Templates

The first ``function templates`` is in ``I_Basic.a_Function_Template`` test.

Templates are compiled in two phases.

1、Checked ignore template parameters. (at definition time)

2、Checked all part include template parameters. (at instantiation time)

**Ensure compiler sees all of function templates before calling them!**