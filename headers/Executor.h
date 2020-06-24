#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <map>
#include <string>

#include "Stack.h"
#include "Word.h"
#include "Register.h"
#include "Registers.h"
#include "Instruction.h"
#include "Interpreter.h"


class Executor{
    private:
        std::map<std::string,int> registerNameToId;
        std::vector<Word> registerValues;
        Interpreter *interpreter;
        Registers *registers;
        Stack stack;
    public:
        Executor();
        ~Executor();

        Instruction executeInstruction(std::string instruction);

        void _lw(Register *reg1, Register *reg2, int offset);
        void _sw(Register *reg1, Register *reg2, int offset);
        void _lb(Register *reg1, Register *reg2,int offset);
        void _sb(Register *reg1, Register *reg2,int offset);
        void _beq(Register *reg1, Register *reg2, int jumpAddress);
        void _bgez(Register *reg, int jumpAddress);
        void _bgezal(Register *reg, int jumpAddress);
        void _bgtz(Register *reg, int jumpAddress);
        void _blez(Register *reg, int jumpAddress);
        void _bltz(Register *reg, int jumpAddress);
        void _bltzal(Register *reg, int jumpAddress);
        void _bne(Register *reg1, Register *reg2, int jumpAddress);
        void _b(int jumpAddress);
        void _bal(int jumpAddress);
        void _bgt(Register *reg1, Register *reg2, int jumpAddress);
        void _blt(Register *reg1, Register *reg2, int jumpAddress);
        void _bge(Register *reg1, Register *reg2, int jumpAddress);
        void _ble(Register *reg1, Register *reg2, int jumpAddress);
        void _bgtu(Register *reg1, Register *reg2, int jumpAddress);
        void _beqz(Register *reg, int jumpAddress);
        void _beq(Register *reg1, int immediate, int jumpAddress);
        void _jump(int jumpAddress);
        void _add(Register *reg1,Register *reg2,Register *reg3);
        void _addi(Register *reg1, Register *reg2, int immediate);
        void _sub(Register *reg1,Register *reg2,Register *reg3);
        void _mult(Register *reg1,Register *reg2);
        void _mflo(Register *reg);
        void _mfhi(Register *reg);
        void _mul(Register *reg1,Register *reg2,Register *reg3);
        void _div(Register *reg1,Register *reg2);
        void _div(Register *reg1,Register *reg2, Register *reg3);
        void _rem(Register *reg1,Register *reg2, Register *reg3);
        void _and(Register *reg1, Register *reg2, Register *reg3);
        void _or(Register *reg1, Register *reg2, Register *reg3);
        void _xor(Register *reg1, Register *reg2, Register *reg3);
        void _andi(Register *reg1, Register *reg2, int immediate);
        void _ori(Register *reg1, Register *reg2, int immediate);
        void _xori(Register *reg1, Register *reg2, int immediate);
        void _slt(Register *reg1, Register *reg2, Register *reg3);
        void _sltu(Register *reg1, Register *reg2, Register *reg3);
        void _slti(Register *reg1, Register *reg2, int immediate);
        void _sltiu(Register *reg1, Register *reg2, unsigned immediate);
        void _jal(int jumpAddress);

        void _addiu(Register *reg1, Register *reg2, unsigned int immediate);
        void _addu(Register *reg1,Register *reg2,Register *reg3);
        void _subu(Register *reg1,Register *reg2,Register *reg3);
        void _divu(Register *reg1,Register *reg2);
                
        void _sllv(Register *reg1,Register *reg2,Register *reg3);
        void _jr(Register *reg);
        void _jalr(Register *reg);
        void _lui(Register *reg,int immediate);
        void _sll(Register *reg1,Register *reg2,int immediate);
        void _noop();
        void _nop();
        void _sra(Register *reg1, Register *reg2, int immediate);
        void _srl(Register *reg1, Register *reg2, int immediate);
        
        void syscall();
        void _move(Register *reg1, Register *reg2);
        void _srlv(Register *reg1, Register *reg2, Register *reg3);
        void _clear(Register *reg);
        void _li(Register *reg1, short immediate);
        void _li(Register *reg1, int immediate);
        void _la(Register *reg1, int address);
        void _nor(Register *reg1, Register *reg2,Register *reg3);
        void _not(Register *reg1, Register *reg2);
};

#endif