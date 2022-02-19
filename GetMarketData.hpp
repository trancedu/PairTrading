//
//  GetMarketData.hpp
//  PairTrading
//
//  Created by 杜学渊 on 2/19/22.
//


#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

#include "json/json.h"
#include "curl/curl.h"
#include <sqlite3.h>

#include "Trade.hpp"
#include "Util.h"

int PullMarketData(const std::string& url_request, std::string& read_buffer);
int PopulateDailyTrades(const std::string& read_buffer,
                    Stock& stock);