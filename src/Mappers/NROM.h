#pragma once
#include "Mapper.h"

class NROM : public Mapper {
public:
    NROM(const uint32_t& PRGromSize, const uint32_t& CHRromSize);

    virtual bool mapReadCPU(const uint16_t& address, uint16_t& mappedAddress) override;
    virtual bool mapWriteCPU(const uint16_t& address, uint16_t& mappedAddress) override;

    virtual bool mapReadPPU(const uint16_t& address, uint16_t& mappedAddress) override;
    virtual bool mapWritePPU(const uint16_t& address, uint16_t& mappedAddress) override;
};