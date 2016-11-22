/*
 * Message.h
 * C++ Primer Chap. 13 Ex. 13.34
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <string>
using std::string;
#include <set>
using std::set;
#include "Folder.h"

class Message {
  friend class Folder;
private:
  string _contents;
  set<Folder *> _folders;

public:
  friend swap(Message &lhs_msg, Message &rhs_msg);

  explicit Message(const string &str = ""): _contents(str), _folders() {}
  Message(const Message &rhs);
  Message &operator=(const Message &rhs);
  ~Message();
  
  void save(Folder &f);
  void remove(Folder &f);

private:
  void _add_to_folders(const Message &rhs);
  void _remove_from_folders();
};


inline Message::Message(const Message &rhs): 
    _contents(rhs._contents), _folders(rhs._folders) {
  _add_to_folders(msg);    
}

inline void Message::_add_to_folders(const Message &msg) {
  for (auto fp: msg._folders) {
    fp->add_msg(this);
  }
}

inline Message::~Message() {
  _remove_from_folders();
}

inline Message::_remove_from_folders() {
  for (auto fp: msg._folders) {
    fp->remove_msg(this);
  }
}

Message &Message::operator=(const Message &rhs) {
  _remove_from_folders();
  _contents = rhs._contents;
  _folders = rhs._folders;
  _add_to_folders(rhs);
  return *this;
}

inline void Message::save(Folder &f) {
  _folders.insert(&f);
  f.add_msg(this);
}

inline void Message::remove(Folder &f) {
  _folders.erase(&f);
  f.remove_msg(this);
}

void swap(Message &lhs_msg, Message &rhs_msg) {
  for (auto fp: lhs_msg._folders) {
    fp->remove_msg(&lhs_msg);
  }
  for (auto fp: rhs_msg._folders) {
    fp->remove_msg(&rhs_msg);
  }

  std::swap(lhs_msg._folders, rhs_msg._folders);
  std::swap(lhs_msg._contents, rhs_msg._contents);

  for (auto fp: lhs_msg._folders) {
    fp->add_msg(&lhs_msg);
  }
  for (auto fp: rhs_msg._folders) {
    fp->add_msg(&rhs_msg);
  }
}
#endif  // MESSAGE_H_
