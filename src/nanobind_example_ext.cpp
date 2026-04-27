#include <nanobind/nanobind.h>

int add(int a, int b) { return a + b; }

NB_MODULE(_nanobind_example_impl, m) {
    m.def("add", &add);
}
