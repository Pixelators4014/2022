#pragma once

// #include <frc2/command/Command.h>
// #include <frc2/command/InstantCommand.h>

#include <frc/Joystick.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/RunCommand.h>

#include "subsystems/DrivetrainSubsystem.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  frc::Joystick m_driverController{OIConstants::driverControllerPort};

  DrivetrainSubsystem m_drive;

  void ConfigureButtonBindings();
};