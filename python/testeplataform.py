import platform
from platform import architecture

machine = platform.machine()
architecture = platform.architecture()
oi = platform.node()
system = platform.system()

print(system)