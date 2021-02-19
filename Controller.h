#pragma once
#include "owner.h"
#include "contact.h"

class Controller
{
public:
	Controller();
	~Controller();

    void setOwner(const owner& _owner)
    {
        m_owner = _owner;
    }

    owner& getOwner()
    {
        return m_owner;
    }

    contact& getContact()
    {
        return m_contact;
    }

private:
    owner m_owner;
    contact m_contact;
};