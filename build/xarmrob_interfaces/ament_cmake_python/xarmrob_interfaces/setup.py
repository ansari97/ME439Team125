from setuptools import find_packages
from setuptools import setup

setup(
    name='xarmrob_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('xarmrob_interfaces', 'xarmrob_interfaces.*')),
)
