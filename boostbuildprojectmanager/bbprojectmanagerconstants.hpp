#ifndef BBPROJECTMANAGERCONSTANTS_HPP
#define BBPROJECTMANAGERCONSTANTS_HPP

#include <qglobal.h>

namespace BoostBuildProjectManager {
namespace Constants {

char const BOOSTBUILD[] = "Boost.Build";

char const PROJECT_CONTEXT[] = "BoostBuildProjectManager.ProjectContext";
char const PROJECT_ID[] = "BoostBuildProjectManager.Project";
char const PROJECT_WIZARD_ID[] = "BoostBuildProjectManager.Project.Wizard";
char const PROJECT_READER_TASK_ID[] = "BoostBuildProjectManager.ProjectReader.Task";

char const BUILDCONFIGURATION_ID[] = "BoostBuildProjectManager.BuildConfiguration";
char const BUILDSTEP_ID[] = "BoostBuildProjectManager.BuildStep";

// Keys for class map registry
char const P_KEY_PROJECTNAME[] = "BoostBuildProjectManager.Project.ProjectName";
char const BC_KEY_WORKDIR[] = "BoostBuildProjectManager.BuildConfiguration.WorkingDirectory";
char const BS_KEY_CLEAN[] = "BoostBuildProjectManager.BuildStep.Clean";
char const BS_KEY_ARGUMENTS[] = "BoostBuildProjectManager.BuildStep.AdditionalArguments";

// MIME types and file patterns
char const MIMETYPE_PROJECT[] = "text/x-boostbuild-project";
char const MIMETYPE_JAMFILE[] = "application/vnd.boostbuild.v2";
char const MIMETYPE_JAMFILE_FILES[] = "application/vnd.qtcreator.boostbuild.files";
char const JAMFILE_FILES_EXT[] = ".qtcreator.files";
char const JAMFILE_INCLUDES_EXT[] = ".qtcreator.includes";

// Command and options
char const COMMAND_BB2[] = "b2";
char const COMMAND_BJAM[] = "bjam";

char const VARIANT_DEBUG[] = QT_TR_NOOP("Debug");
char const VARIANT_RELEASE[] = QT_TR_NOOP("Release");

// ${BOOST}/tools/build/v2/doc/src/architecture.xml
// Since Boost.Build almost always generates targets under the "bin"
char const BUILD_DIR_NAME[] = "bin";

// FileSelectionWizardPage
char const HIDE_FILE_FILTER_SETTING[] = "BoostBuildProjectManager/FileFilter";
char const HIDE_FILE_FILTER_DEFAULT[] = "Makefile*; *.o; *.obj; *~; *.files; *.config; *.creator; *.user; *.includes; *.autosave";
char const SHOW_FILE_FILTER_SETTING[] = "BoostBuildProjectManager/ShowFileFilter";
char const SHOW_FILE_FILTER_DEFAULT[] = "*.c; *.cc; *.cpp; *.cp; *.cxx; *.c++; *.h; *.hh; *.hpp; *.hxx;";

// Meaningful names for common boolean values
bool const FileNotGenerated = false;
bool const ReturnValueNotIgnored = false;

} // namespace Constants
} // namespace BoostBuildProjectManager

#endif // BBPROJECTMANAGERCONSTANTS_HPP
