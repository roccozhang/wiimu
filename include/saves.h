#ifndef _SAVES_H
#define _SAVES_H

void saveToSD(u32 TitleIDH, u32 TitleIDL, char* titleName, char* subtitleName, char* destdir);
void saveDeleter(u32 TitleIDH, u32 TitleIDL, u64 TitleID, char* titleName, char* subtitleName);
void saveManager();

#endif //_SAVES_H

