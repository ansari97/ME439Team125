import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/aansari/Documents/ME439/ME439Team125/install/finalproj125'
