/*
 * Folder.h
 * C++ Primer Chap. 13 Ex. 13.34
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#ifndef FOLDER_H_
#define FOLDER_H_

#include <set>
using std::set;

class Folder {
  friend class Message;
private:
  set<Message *> _messages;

public:
  Folder() = default;
  Folder(const Folder &f);
  Folder &operator=(const Folder &f);
  ~Folder();

public:
  void add_message(Message &m) { _messages.insert(m); }
  void remover_message(Message &m) { _messages.erase(m); }

private:
  void _add_to_message(const Folder &f);
  void _remove_from_message();
};



#endif  // FOLDER_H_
