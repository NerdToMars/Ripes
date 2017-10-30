#ifndef RUNNER_H
#define RUNNER_H

#include "defines.h"

class Parser;

class Runner {
public:
  Runner(Parser *parser);
  ~Runner();

  int exec();

private:
  error execInstruction(Instruction instr);
  void handleError(error err);

  int m_pc;           // program counter
  uint32_t m_reg[32]; // Internal registers
  uint32_t *m_mem;    // Data memory

  Parser *m_parser;
};

#endif // RUNNER_H