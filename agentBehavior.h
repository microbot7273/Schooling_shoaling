#ifndef AGENTBEHAVIOR_H
#define AGENTBEHAVIOR_H
#pragma once
#include<genericagent.h>
#include<cstring>


class agentBehavior: public genericAgent{
    private:
        double altruism;//selflessness in an agent
    public:
        bool alpha=false;//operator for checking whether the fish is alpha or not
        double getAltruism(int alt){
              altruism = alt;
              return 0;
        }
        double giveAltruism(){
            return altruism;
        }





    };




#endif // AGENTBEHAVIOR_H
