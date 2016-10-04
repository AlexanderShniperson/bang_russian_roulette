/*
 Bang Russian Roulette (client) - This is real online and multiplayer game published at Google Play.
 Copyright (C) 2016  Alexander Shniperson
 Email: alex.shniperson@gmail.com
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __BrrClient__DialogPlayerInfo__
#define __BrrClient__DialogPlayerInfo__

#include "cocos2d.h"
#include "DialogBase.h"
#include "ProtoMessageDelegate.h"
#include "MessageResponse.pb.h"

class DialogPlayerInfo : public DialogBase, public ProtoMessageDelegate {
public:
    static DialogPlayerInfo* create(long long playerId);
    bool init(long long playerId);
    void processProtoMessage(const eProtoMessageType messageType, const std::string &messageBody);
private:
    enum SceneTags {
        txtNameTag = 100,
        txtWinsTag,
        txtLosesTag
    };
    void getPlayerInfo(long long playerId);
    void callbackGetPlayerInfo(const std::string &source);
};

#endif /* defined(__BrrClient__DialogPlayerInfo__) */
