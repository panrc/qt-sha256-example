#ifndef SHA256WRAPPER_H
#define SHA256WRAPPER_H

#include <QString>
#include <stdint.h>
#include "sha256.h"

class SHA256Wrapper
{
public:
    // 静态函数，输入QString，输出QString
    static QString computeHash(const QString &input);
};

#endif // SHA256WRAPPER_H
