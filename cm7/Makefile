# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2023
# ------------------------------------------------

# Platform
# Uncomment if program platform must be diffrent than the solution
# PLATFORM := ArmM4

# Target
target := cm7

# Directories
project_dir ?= ..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

# Sources 
cxx_sources :=  \
$(wildcard ./*.cpp)

# Includes
cxx_includes := \
-I. \

# Defines
cxx_defs := \

# internal libraries
required_internal_libraries = \
driver-cm7 \
hardware \
application-cm7 \

# libraries
required_libraries = \

# external libraries
#	e.g. if include flag is '-I$(external_dir)/libFoo'
#	write 'libFoo'
external_library_include_path = \

external_library_flags = \

#	e.g. if link flag is '-L$(external_dir)/libFoo/lib'
#	write 'libFoo/lib'
external_library_paths = \

# Linker script
ldscript = $(project_dir)/cube/CM7/STM32H755ZITX_FLASH.ld

# Append rest of Makefile from template
include $(make_dir)/Program.mk