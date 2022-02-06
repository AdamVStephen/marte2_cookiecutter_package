{{cookiecutter.license}}

OBJSX= 

{{cookiecutter.gams_subprojects}}

PACKAGE={{cookiecutter.package_name}}
ROOT_DIR=../../..
MAKEDEFAULTDIR=$(MARTe2_DIR)/MakeDefaults

include $(MAKEDEFAULTDIR)/MakeStdLibDefs.$(TARGET)

all: $(OBJS)  $(SUBPROJ)  
	echo  $(OBJS)

include $(MAKEDEFAULTDIR)/MakeStdLibRules.$(TARGET)


