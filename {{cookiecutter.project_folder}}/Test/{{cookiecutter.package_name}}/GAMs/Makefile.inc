{{cookiecutter.license}}

{{cookiecutter.gams_subprojects}}

ifdef EFDA_MARTe_DIR
SPB += BaseLib2GAM.x
endif

PACKAGE={{cookiecutter.package_name}}
ROOT_DIR=../../..
MAKEDEFAULTDIR=$(MARTe2_DIR)/MakeDefaults

include $(MAKEDEFAULTDIR)/MakeStdLibDefs.$(TARGET)

{{cookiecutter.gams_test_libraries_static}}

ifdef EFDA_MARTe_DIR)
LIBRARIES_STATIC+=$(BUILD_DIR)/BaseLib2GAM/BaseLib2GAMTest$(LIBEXT)
endif

all: $(OBJS) $(SUBPROJ) \
    $(BUILD_DIR)/GAMsTests$(LIBEXT)
	echo  $(OBJS)

include depends.$(TARGET)

include $(MAKEDEFAULTDIR)/MakeStdLibRules.$(TARGET)
