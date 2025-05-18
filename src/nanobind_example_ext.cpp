#include <nanobind/nanobind.h>

#include <mandelbrot_ispc.h>

namespace nb = nanobind;

using namespace nb::literals;

NB_MODULE(nanobind_example_ext, m) {
    m.doc() = "This is a \"hello world\" example with nanobind";
    m.def("add", [](int a, int b) { return a + b; }, "a"_a, "b"_a);
    m.def("mandelbrot_ispc", &ispc::mandelbrot_ispc);
}
