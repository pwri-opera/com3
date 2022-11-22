// This file created by customized dbcppp automatically
// Menbers in structure can be access by reflection using RTTR libraries(https://www.rttr.org/)
// Modify your_namespace and Type

#include <dbcppp/Network.h>
#include <dbcppp/Network2Functions.h>
#include <rttr/registration>

namespace excavator_com3
{
  struct machine_state
  {
    std::uint8_t alive_counter;
    static const std::uint64_t id = 2550202115;
    static const std::uint64_t cycle_time = 100;
    std::uint64_t Id() { return id; }
    std::uint64_t Cycle_time() { return cycle_time; }
    RTTR_ENABLE()
  };
  struct machine_setting_cmd
  {
    bool travel_mode;
    bool power_eco_mode;
    bool hydraulic_onoff;
    std::uint8_t engine_rpm;
    bool engine_onoff;
    std::uint8_t alive_counter;
    static const std::uint64_t id = 2550202114;
    static const std::uint64_t cycle_time = 100;
    std::uint64_t Id() { return id; }
    std::uint64_t Cycle_time() { return cycle_time; }
    RTTR_ENABLE()
  };

  struct lever_cmd_2
  {
    bool right_track_direction_cmd;
    bool right_track_status_cmd;
    double right_track_cmd;
    bool left_track_direction_cmd;
    bool left_track_status_cmd;
    double left_track_cmd;
    static const std::uint64_t id = 2550202113;
    static const std::uint64_t cycle_time = 10;
    std::uint64_t Id() { return id; }
    std::uint64_t Cycle_time() { return cycle_time; }
    RTTR_ENABLE()
  };
  struct lever_cmd_1
  {
    bool bucket_status_cmd;
    bool bucket_direction_cmd;
    double bucket_cmd;
    bool boom_status_cmd;
    bool boom_direction_cmd;
    double boom_cmd;
    bool arm_status_cmd;
    bool arm_direction_cmd;
    double arm_cmd;
    bool swing_status_cmd;
    bool swing_direction_cmd;
    double swing_cmd;
    static const std::uint64_t id = 2550202112;
    static const std::uint64_t cycle_time = 10;
    std::uint64_t Id() { return id; }
    std::uint64_t Cycle_time() { return cycle_time; }
    RTTR_ENABLE()
  };
  struct Can_Bus : machine_state, machine_setting_cmd, lever_cmd_2, lever_cmd_1
  {
    RTTR_ENABLE(machine_state, machine_setting_cmd, lever_cmd_2, lever_cmd_1)
  };

  RTTR_REGISTRATION
  {
    rttr::registration::class_<machine_state>("machine_state")
        .constructor<>()
        .property("machine_state::alive_counter", &machine_state::alive_counter);

    rttr::registration::class_<machine_setting_cmd>("machine_setting_cmd")
        .constructor<>()
        .property("machine_setting_cmd::travel_mode", &machine_setting_cmd::travel_mode)
        .property("machine_setting_cmd::power_eco_mode", &machine_setting_cmd::power_eco_mode)
        .property("machine_setting_cmd::hydraulic_onoff", &machine_setting_cmd::hydraulic_onoff)
        .property("machine_setting_cmd::engine_rpm", &machine_setting_cmd::engine_rpm)
        .property("machine_setting_cmd::engine_onoff", &machine_setting_cmd::engine_onoff)
        .property("machine_setting_cmd::alive_counter", &machine_setting_cmd::alive_counter);

    rttr::registration::class_<lever_cmd_2>("lever_cmd_2")
      .constructor<>()
      .property("lever_cmd_2::right_track_direction_cmd", &lever_cmd_2::right_track_direction_cmd)
      .property("lever_cmd_2::right_track_status_cmd", &lever_cmd_2::right_track_status_cmd)
      .property("lever_cmd_2::right_track_cmd", &lever_cmd_2::right_track_cmd)
      .property("lever_cmd_2::left_track_direction_cmd", &lever_cmd_2::left_track_direction_cmd)
      .property("lever_cmd_2::left_track_status_cmd", &lever_cmd_2::left_track_status_cmd)
      .property("lever_cmd_2::left_track_cmd", &lever_cmd_2::left_track_cmd);

    rttr::registration::class_<lever_cmd_1>("lever_cmd_1")
      .constructor<>()
      .property("lever_cmd_1::bucket_status_cmd", &lever_cmd_1::bucket_status_cmd)
      .property("lever_cmd_1::bucket_direction_cmd", &lever_cmd_1::bucket_direction_cmd)
      .property("lever_cmd_1::bucket_cmd", &lever_cmd_1::bucket_cmd)
      .property("lever_cmd_1::boom_status_cmd", &lever_cmd_1::boom_status_cmd)
      .property("lever_cmd_1::boom_direction_cmd", &lever_cmd_1::boom_direction_cmd)
      .property("lever_cmd_1::boom_cmd", &lever_cmd_1::boom_cmd)
      .property("lever_cmd_1::arm_status_cmd", &lever_cmd_1::arm_status_cmd)
      .property("lever_cmd_1::arm_direction_cmd", &lever_cmd_1::arm_direction_cmd)
      .property("lever_cmd_1::arm_cmd", &lever_cmd_1::arm_cmd)
      .property("lever_cmd_1::swing_status_cmd", &lever_cmd_1::swing_status_cmd)
      .property("lever_cmd_1::swing_direction_cmd", &lever_cmd_1::swing_direction_cmd)
      .property("lever_cmd_1::swing_cmd", &lever_cmd_1::swing_cmd);

    rttr::registration::class_<Can_Bus>("Can_Bus")
    .constructor<>();

  }
}
