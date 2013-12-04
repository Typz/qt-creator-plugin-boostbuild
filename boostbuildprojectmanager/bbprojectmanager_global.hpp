//
// Copyright (C) 2013 Mateusz Łoskot <mateusz@loskot.net>
//
// This file is part of Qt Creator Boost.Build plugin project.
//
// This is free software; you can redistribute and/or modify it under
// the terms of the GNU Lesser General Public License, Version 2.1
// as published by the Free Software Foundation.
// See the LICENSE.txt file for more information.
//
#ifndef BBPROJECTMANAGER_GLOBAL_HPP
#define BBPROJECTMANAGER_GLOBAL_HPP

#include <QtGlobal>

#if defined(BOOSTBUILDPROJECTMANAGER_LIBRARY)
#  define BOOSTBUILDPROJECTMANAGER_EXPORT Q_DECL_EXPORT
#else
#  define BOOSTBUILDPROJECTMANAGER_EXPORT Q_DECL_IMPORT
#endif

#endif // BBPROJECTMANAGER_GLOBAL_HPP
