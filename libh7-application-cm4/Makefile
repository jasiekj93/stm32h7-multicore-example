# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Platform
# Uncomment if program platform must be diffrent than the solution
PLATFORM := ArmM4

# Target
library_name := application-cm4

# Directories
project_dir ?= ..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

# Sources 
cxx_sources :=  \
$(wildcard libh7/application/cm4/*.cpp) \

# Includes
cxx_includes := \
-I. \

# Defines
cxx_defs := \

# internal libraries
export required_libraries = \
hardware-cm4 \

# external libraries
#	e.g. if include flag is '-I$(external_dir)/libFoo'
#	write 'libFoo'
export external_library_include_path = \

# 	for testing purpose - use only PC 32-bit version
export external_library_flags = \

# 	for testing purposes - use only PC 32-bit version
#	e.g. if link flag is '-L$(external_dir)/libFoo/lib'
#	write 'libFoo/lib'
export external_library_paths = \

# Append rest of Makefile from template
include $(make_dir)/InternalSoftwareLib.mk