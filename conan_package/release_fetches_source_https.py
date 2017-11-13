from base import ProtocolWireBase

# Use this recipe when creating recipies for uploading to joystream conan repo on stable channel
# Source will be fetched from github repo

class ProtocolWireRelease(ProtocolWireBase):
    exports = "base.py"

    # make extra sure no sources are exported by base package
    exports_sources = ""

    def source(self):
        self.run("git clone %s repo" % self.repo_https_url)
        self.run("cd repo && git checkout v%s" % self.version)
