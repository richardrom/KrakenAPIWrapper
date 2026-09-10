from conan import ConanFile
from conan.tools.cmake import cmake_layout, CMakeToolchain

class KrakenWrapperApplication(ConanFile):
    package_type = "application"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps"

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.user_presets_path = False
        tc.generate()

    def requirements(self):
        self.requires("fmt/12.2.0")
        self.requires("cpr/1.11.1")
        self.requires("libwebsockets/4.5.8")
        self.requires("simdjson/3.13.0")
        self.requires("openssl/3.5.0")