#ifndef ALPHA
#define ALPHA
#include<array>
#include<iostream>
int find_alpha(int n, double hunger[], double maxhungry, double maxaltruism, double maxaggression, double Altruism[], double Aggression[]){
    int alpha_agent;
    int agent_number=0;//declaring the agent number integer
    while(agent_number<n){
        if(hunger[agent_number]==maxhungry){
            if(Altruism[agent_number]==maxaltruism){
                if(Aggression[agent_number]==maxaggression){
                    alpha_agent = agent_number;
                    std::cout<<agent_number<<std::endl;
                }
            }
        }
        agent_number++;
    }
    return alpha_agent;
}

#endif // ALPHA

