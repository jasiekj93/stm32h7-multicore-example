# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Platform
# Uncomment if program platform must be diffrent than the solution
# PLATFORM := ArmM4

# Target
library_name := driver-cm7

# Directories
project_dir := ..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

# Sources 
cxx_sources =  \
$(wildcard libh7/driver/cm7/*.cpp)

c_sources := \
$(wildcard $(project_dir)/cube/CM7/Core/Src/*.c) \
$(wildcard $(project_dir)/cube/CM7/Core/Src/*.c) \
$(wildcard $(project_dir)/cube/Common/Src/*.c) \
$(wildcard $(project_dir)/cube/Drivers/STM32H7xx_HAL_Driver/Src/*.c) \

asm_sources := \
$(wildcard $(project_dir)/cube/CM7/Core/Startup/*.s) \

# Includes
cxx_includes :=  \
-I. \
-I$(project_dir)/cube/CM7/Core/Inc \
-I$(project_dir)/cube/Drivers/CMSIS/Device/ST/STM32H7xx/Include \
-I$(project_dir)/cube/Drivers/CMSIS/Include \
-I$(project_dir)/cube/Drivers/STM32H7xx_HAL_Driver/Inc \

# Defines
cxx_defs := \
-DSTM32H755xx \
-DCORE_CM7 \

# internal libraries
export required_libraries = \
driver-common \
hardware \

# external libraries
#	e.g. if include flag is '-I$(external_dir)/libFoo'
#	write 'libFoo'
export external_library_include_path = \

# 	for testing purposes
export external_library_flags = \

# 	for testing purposes 
#	e.g. if link flag is '-L$(external_dir)/libFoo/lib'
#	write 'libFoo/lib'
export external_library_paths = \

# Uncomment if gcc should be used for compilation *.c files
use_gcc_for_c_files := 1

# Append rest of Makefile from template
include $(make_dir)/InternalHardwareLibNoTests.mk
