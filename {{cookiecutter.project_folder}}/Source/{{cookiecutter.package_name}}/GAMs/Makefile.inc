{{cookiecutter.license}}

OBJSX= 

{{cookiecutter.gams_subprojects}}

PACKAGE={{cookiecutter.package_name}}
ROOT_DIR=../../..
MAKEDEFAULTDIR=$(MARTe2_DIR)/MakeDefaults

include $(MAKEDEFAULTDIR)/MakeStdLibDefs.$(TARGET)

{{cookiecutter.gams_libraries_static}}

all: $(OBJS)  $(SUBPROJ)  \
    $(BUILD_DIR)/GAMs$(LIBEXT) \
    $(BUILD_DIR)/GAMs$(DLLEXT)
	echo  $(OBJS)

include $(MAKEDEFAULTDIR)/MakeStdLibRules.$(TARGET)
