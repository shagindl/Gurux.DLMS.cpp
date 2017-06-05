#include <string.h>
#include <errno.h>

#include "include/GXDLMSServerSN.h"
#include "include/GXDLMSServerLN.h"

int Test()
{
    int ret;
    ///////////////////////////////////////////////////////////////////////
    //Create Gurux DLMS server component for Short Name and start listen events.
    CGXDLMSServerLN LNServer;
    if ((ret = LNServer.Init(4061)) != 0)
    {
        return ret;
    }
    printf("Logical Name DLMS Server in port 4061.\r\n");

    return 0;
}

int main()
{
    Test();

    return 0;
}

