// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include <frc/Encoder.h>

#include <Constants.h>

class ClimberSubsystem : public frc2::SubsystemBase
{
public:
  ClimberSubsystem();

  void Periodic() override;

  void setLeftSpeed(double speed);
  void setRightSpeed(double speed);
  void setSpeed(double speed);
  void ResetEncoders();
  double getLeftEncoderDistance();
  double getRightEncoderDistance();
  double getAverageEncoderDistance();

private:
  rev::CANSparkMax m_leftMotor;
  rev::CANSparkMax m_rightMotor;

  rev::SparkMaxRelativeEncoder m_leftEncoder;
  rev::SparkMaxRelativeEncoder m_rightEncoder;
};