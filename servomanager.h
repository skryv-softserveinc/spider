#ifndef SERVOMANAGER_H
#define SERVOMANAGER_H

#include "proto/command.pb.h"
#include "hardware/lx16lib/lx16driver.h"

class ServoManager
{
public:
    ServoManager();
    static Command::ResponceFromServo processServoCommand(Command::CommandToServo& command);
    static void setAngleF(int idx, float angle);
private:
    static Command::ResponceFromServo getAngle(Command::CommandToServo& command);
    static Command::ResponceFromServo setAngle(Command::CommandToServo& command);
    static Command::ResponceFromServo getVoltage(Command::CommandToServo& command);
    static Command::ResponceFromServo getTemperature(Command::CommandToServo& command);
};

#endif // SERVOMANAGER_H
