# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# platform
export PLATFORM := ArmM7

# project
export project_name := h7

# Directories
project_dir := .
make_dir := $(project_dir)/make

# Documentation directory
export docs_dir := docs

# External libraries
external_names = \

external_build_options = \

# Project internal libraries
internal_library_names = \
driver-cm4 \
driver-cm7 \
application-cm4 \
application-cm7 \
hardware \
hardware-cm4 \

# Project subprograms
program_names = \
cm4 \
cm7 \

# Project libraries
library_names = \

# Append rest of Makefile from template
include $(make_dir)/Main.mk

# Enter the internal library dependencies (by directory name)
# 	E.g.: if libproject-a depends on libproject-b write the line above:
#	libproject-a: libproject-b
libh7-application-cm7: libh7-hardware
libh7-application-cm4: libh7-hardware-cm4

# Custom targets