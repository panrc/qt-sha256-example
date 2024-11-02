#include "sha256wrapper.h"

QString SHA256Wrapper::computeHash(const QString &input)
{
    // 将QString转换为QByteArray
    QByteArray byteArray = input.toUtf8();
    const void *data = byteArray.constData();
    size_t len = byteArray.size();

    // 计算SHA-256哈希
    uint8_t hash[SHA256_SIZE_BYTES];
    sha256(data, len, hash);

    // 将哈希结果转换为QString
    QString hashString;
    for(int i = 0; i < SHA256_SIZE_BYTES; ++i){
        hashString += QString("%1").arg(hash[i], 2, 16, QChar('0'));
    }

    return hashString;
}
