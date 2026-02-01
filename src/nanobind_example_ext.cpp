#include <nanobind/nanobind.h>

int add(int a, int b) { return a + b +1000; }

NB_MODULE(_nanobind_example_impl, m) {
    m.def("add", &add);
}
