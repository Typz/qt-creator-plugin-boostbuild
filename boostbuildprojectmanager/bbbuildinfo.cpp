//
// Copyright (C) 2013 Mateusz Łoskot <mateusz@loskot.net>
//
// This file is part of Qt Creator Boost.Build plugin project.
//
// This is free software; you can redistribute and/or modify it under
// the terms of the  GNU Lesser General Public License, Version 2.1
// as published by the Free Software Foundation.
// See accompanying file LICENSE.txt or copy at
// http://www.gnu.org/licenses/lgpl-2.1-standalone.html.
//
#include "bbbuildinfo.hpp"
#include "bbbuildconfiguration.hpp"
#include "bbprojectmanagerconstants.hpp"

namespace BoostBuildProjectManager {
namespace Internal {

BuildInfo::BuildInfo(BuildConfigurationFactory const* f)
    : ProjectExplorer::BuildInfo(f)
    , buildType(BuildConfiguration::Debug)
{
}

} // namespace Internal
} // namespace BoostBuildProjectManager
