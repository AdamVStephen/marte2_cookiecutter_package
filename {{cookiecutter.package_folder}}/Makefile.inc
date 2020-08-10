{{cookiecutter.license}}

{{cookiecutter.subprojects}}

MAKEDEFAULTDIR=$(MARTe2_DIR)/MakeDefaults

ROOT_DIR=.
include $(MAKEDEFAULTDIR)/MakeStdLibDefs.$(TARGET)

all: $(OBJS) $(SUBPROJ) check-env
	echo  $(OBJS)

include $(MAKEDEFAULTDIR)/MakeStdLibRules.$(TARGET)

check-env:
ifndef MARTe2_DIR
    $(error MARTe2_DIR is undefined)
endif

