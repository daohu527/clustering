load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "libcustom_component.so",
    linkshared = True,
    linkstatic = False,
    deps = [":custom_component_lib"],
)

cc_library(
    name = "custom_component_lib",
    srcs = ["custom_component.cc"],
    hdrs = ["custom_component.h"],
    deps = [
        "//cyber",
        "//cyber/examples/proto:examples_cc_proto",
    ],
)

filegroup(
    name = "conf",
    srcs = [
        ":common.dag",
        ":common.launch",
    ],
)
