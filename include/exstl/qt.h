
#ifndef _QT_HPP_
#define _QT_HPP_

#define QGLOBAL_H
#include "qt/qcompilerdetection.h"
#include "qt/qprocessordetection.h"
#include "qt/qsystemdetection.h"

#if defined(Q_OS_WIN)
#define OS_WIN
#elif defined(Q_OS_LINUX)
#define OS_LINUX
#elif
#error "Operating system not supported"
#endif

#endif
