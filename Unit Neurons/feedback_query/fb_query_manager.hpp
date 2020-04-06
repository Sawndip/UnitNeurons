//
//  query_manager.hpp
//  Unit Neurons
//
//  Created by John Lime on 2020/04/06.
//  Copyright © 2020 Mioto Takahashi. All rights reserved.
//

#ifndef query_manager_hpp
#define query_manager_hpp

#include "unit_neuron.hpp"
#include <stdio.h>

struct FeedbackQuery
{
    FloatUnitNeuron* neuron;
    float* fb_input;
};

class FeedbackQueryManager{
private:
    FeedbackQuery* query_list;  // dynamic array of queries
    int num_query;
    
public:
    FeedbackQueryManager();
    void add_query(FeedbackQuery _new);
    void execute_all();
};

#endif /* query_manager_hpp */
