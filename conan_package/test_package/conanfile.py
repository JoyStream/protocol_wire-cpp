from conans import ConanFile, CMake
import os

class ProtocolWireTestConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = "ProtocolWire/0.0.0@%s/%s" % ("joystream", "testing")
    generators = "cmake"

    def build(self):
        cmake = CMake(self.settings)
        self.run('cmake "%s" %s' % (self.conanfile_directory, cmake.command_line))
        self.run("cmake --build . %s" % cmake.build_config)

    def imports(self):
        self.copy("*.dll", "bin", "bin")
        self.copy("*.dylib", "bin", "bin")

    def test(self):
        os.chdir("bin")
        self.run(".%sexample" % os.sep)
