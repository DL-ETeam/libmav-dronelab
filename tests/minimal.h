#ifndef LIBMAVLINK_MINIMAL_H
#define LIBMAVLINK_MINIMAL_H

#include <string>

const char minimal_xml[] = R""""(
<?xml version="1.0"?>
<mavlink>
  <version>3</version>
  <enums>
    <enum name="MAV_AUTOPILOT">
      <description>Micro air vehicle / autopilot classes. This identifies the individual model.</description>
      <entry value="0" name="MAV_AUTOPILOT_GENERIC">
        <description>Generic autopilot, full support for everything</description>
      </entry>
      <entry value="1" name="MAV_AUTOPILOT_RESERVED">
        <description>Reserved for future use.</description>
      </entry>
      <entry value="2" name="MAV_AUTOPILOT_SLUGS">
        <description>SLUGS autopilot, http://slugsuav.soe.ucsc.edu</description>
      </entry>
      <entry value="3" name="MAV_AUTOPILOT_ARDUPILOTMEGA">
        <description>ArduPilot - Plane/Copter/Rover/Sub/Tracker, https://ardupilot.org</description>
      </entry>
      <entry value="4" name="MAV_AUTOPILOT_OPENPILOT">
        <description>OpenPilot, http://openpilot.org</description>
      </entry>
      <entry value="5" name="MAV_AUTOPILOT_GENERIC_WAYPOINTS_ONLY">
        <description>Generic autopilot only supporting simple waypoints</description>
      </entry>
      <entry value="6" name="MAV_AUTOPILOT_GENERIC_WAYPOINTS_AND_SIMPLE_NAVIGATION_ONLY">
        <description>Generic autopilot supporting waypoints and other simple navigation commands</description>
      </entry>
      <entry value="7" name="MAV_AUTOPILOT_GENERIC_MISSION_FULL">
        <description>Generic autopilot supporting the full mission command set</description>
      </entry>
      <entry value="8" name="MAV_AUTOPILOT_INVALID">
        <description>No valid autopilot, e.g. a GCS or other MAVLink component</description>
      </entry>
      <entry value="9" name="MAV_AUTOPILOT_PPZ">
        <description>PPZ UAV - http://nongnu.org/paparazzi</description>
      </entry>
      <entry value="10" name="MAV_AUTOPILOT_UDB">
        <description>UAV Dev Board</description>
      </entry>
      <entry value="11" name="MAV_AUTOPILOT_FP">
        <description>FlexiPilot</description>
      </entry>
      <entry value="12" name="MAV_AUTOPILOT_PX4">
        <description>PX4 Autopilot - http://px4.io/</description>
      </entry>
      <entry value="13" name="MAV_AUTOPILOT_SMACCMPILOT">
        <description>SMACCMPilot - http://smaccmpilot.org</description>
      </entry>
      <entry value="14" name="MAV_AUTOPILOT_AUTOQUAD">
        <description>AutoQuad -- http://autoquad.org</description>
      </entry>
      <entry value="15" name="MAV_AUTOPILOT_ARMAZILA">
        <description>Armazila -- http://armazila.com</description>
      </entry>
      <entry value="16" name="MAV_AUTOPILOT_AEROB">
        <description>Aerob -- http://aerob.ru</description>
      </entry>
      <entry value="17" name="MAV_AUTOPILOT_ASLUAV">
        <description>ASLUAV autopilot -- http://www.asl.ethz.ch</description>
      </entry>
      <entry value="18" name="MAV_AUTOPILOT_SMARTAP">
        <description>SmartAP Autopilot - http://sky-drones.com</description>
      </entry>
      <entry value="19" name="MAV_AUTOPILOT_AIRRAILS">
        <description>AirRails - http://uaventure.com</description>
      </entry>
      <entry value="20" name="MAV_AUTOPILOT_REFLEX">
        <description>Fusion Reflex - https://fusion.engineering</description>
      </entry>
    </enum>
    <enum name="MAV_TYPE">
      <description>MAVLINK component type reported in HEARTBEAT message. Flight controllers must report the type of the vehicle on which they are mounted (e.g. MAV_TYPE_OCTOROTOR). All other components must report a value appropriate for their type (e.g. a camera must use MAV_TYPE_CAMERA).</description>
      <entry value="0" name="MAV_TYPE_GENERIC">
        <description>Generic micro air vehicle</description>
      </entry>
      <entry value="1" name="MAV_TYPE_FIXED_WING">
        <description>Fixed wing aircraft.</description>
      </entry>
      <entry value="2" name="MAV_TYPE_QUADROTOR">
        <description>Quadrotor</description>
      </entry>
      <entry value="3" name="MAV_TYPE_COAXIAL">
        <description>Coaxial helicopter</description>
      </entry>
      <entry value="4" name="MAV_TYPE_HELICOPTER">
        <description>Normal helicopter with tail rotor.</description>
      </entry>
      <entry value="5" name="MAV_TYPE_ANTENNA_TRACKER">
        <description>Ground installation</description>
      </entry>
      <entry value="6" name="MAV_TYPE_GCS">
        <description>Operator control unit / ground control station</description>
      </entry>
      <entry value="7" name="MAV_TYPE_AIRSHIP">
        <description>Airship, controlled</description>
      </entry>
      <entry value="8" name="MAV_TYPE_FREE_BALLOON">
        <description>Free balloon, uncontrolled</description>
      </entry>
      <entry value="9" name="MAV_TYPE_ROCKET">
        <description>Rocket</description>
      </entry>
      <entry value="10" name="MAV_TYPE_GROUND_ROVER">
        <description>Ground rover</description>
      </entry>
      <entry value="11" name="MAV_TYPE_SURFACE_BOAT">
        <description>Surface vessel, boat, ship</description>
      </entry>
      <entry value="12" name="MAV_TYPE_SUBMARINE">
        <description>Submarine</description>
      </entry>
      <entry value="13" name="MAV_TYPE_HEXAROTOR">
        <description>Hexarotor</description>
      </entry>
      <entry value="14" name="MAV_TYPE_OCTOROTOR">
        <description>Octorotor</description>
      </entry>
      <entry value="15" name="MAV_TYPE_TRICOPTER">
        <description>Tricopter</description>
      </entry>
      <entry value="16" name="MAV_TYPE_FLAPPING_WING">
        <description>Flapping wing</description>
      </entry>
      <entry value="17" name="MAV_TYPE_KITE">
        <description>Kite</description>
      </entry>
      <entry value="18" name="MAV_TYPE_ONBOARD_CONTROLLER">
        <description>Onboard companion controller</description>
      </entry>
      <entry value="19" name="MAV_TYPE_VTOL_TAILSITTER_DUOROTOR">
        <description>Two-rotor Tailsitter VTOL that additionally uses control surfaces in vertical operation. Note, value previously named MAV_TYPE_VTOL_DUOROTOR.</description>
      </entry>
      <entry value="20" name="MAV_TYPE_VTOL_TAILSITTER_QUADROTOR">
        <description>Quad-rotor Tailsitter VTOL using a V-shaped quad config in vertical operation. Note: value previously named MAV_TYPE_VTOL_QUADROTOR.</description>
      </entry>
      <entry value="21" name="MAV_TYPE_VTOL_TILTROTOR">
        <description>Tiltrotor VTOL. Fuselage and wings stay (nominally) horizontal in all flight phases. It able to tilt (some) rotors to provide thrust in cruise flight.</description>
      </entry>
      <entry value="22" name="MAV_TYPE_VTOL_FIXEDROTOR">
        <description>VTOL with separate fixed rotors for hover and cruise flight. Fuselage and wings stay (nominally) horizontal in all flight phases.</description>
      </entry>
      <entry value="23" name="MAV_TYPE_VTOL_TAILSITTER">
        <description>Tailsitter VTOL. Fuselage and wings orientation changes depending on flight phase: vertical for hover, horizontal for cruise. Use more specific VTOL MAV_TYPE_VTOL_DUOROTOR or MAV_TYPE_VTOL_QUADROTOR if appropriate.</description>
      </entry>
      <!-- Entries 24/25 reserved for other VTOL airframe -->
      <entry value="24" name="MAV_TYPE_VTOL_RESERVED4">
        <description>VTOL reserved 4</description>
      </entry>
      <entry value="25" name="MAV_TYPE_VTOL_RESERVED5">
        <description>VTOL reserved 5</description>
      </entry>
      <entry value="26" name="MAV_TYPE_GIMBAL">
        <description>Gimbal</description>
      </entry>
      <entry value="27" name="MAV_TYPE_ADSB">
        <description>ADSB system</description>
      </entry>
      <entry value="28" name="MAV_TYPE_PARAFOIL">
        <description>Steerable, nonrigid airfoil</description>
      </entry>
      <entry value="29" name="MAV_TYPE_DODECAROTOR">
        <description>Dodecarotor</description>
      </entry>
      <entry value="30" name="MAV_TYPE_CAMERA">
        <description>Camera</description>
      </entry>
      <entry value="31" name="MAV_TYPE_CHARGING_STATION">
        <description>Charging station</description>
      </entry>
      <entry value="32" name="MAV_TYPE_FLARM">
        <description>FLARM collision avoidance system</description>
      </entry>
      <entry value="33" name="MAV_TYPE_SERVO">
        <description>Servo</description>
      </entry>
      <entry value="34" name="MAV_TYPE_ODID">
        <description>Open Drone ID. See https://mavlink.io/en/services/opendroneid.html.</description>
      </entry>
      <entry value="35" name="MAV_TYPE_DECAROTOR">
        <description>Decarotor</description>
      </entry>
      <entry value="36" name="MAV_TYPE_BATTERY">
        <description>Battery</description>
      </entry>
      <entry value="37" name="MAV_TYPE_PARACHUTE">
        <description>Parachute</description>
      </entry>
      <entry value="38" name="MAV_TYPE_LOG">
        <description>Log</description>
      </entry>
      <entry value="39" name="MAV_TYPE_OSD">
        <description>OSD</description>
      </entry>
      <entry value="40" name="MAV_TYPE_IMU">
        <description>IMU</description>
      </entry>
      <entry value="41" name="MAV_TYPE_GPS">
        <description>GPS</description>
      </entry>
      <entry value="42" name="MAV_TYPE_WINCH">
        <description>Winch</description>
      </entry>
      <entry value="43" name="MAV_TYPE_JOYSTICK">
        <description>Joystick</description>
      </entry>
    </enum>
    <enum name="MAV_MODE_FLAG" bitmask="true">
      <description>These flags encode the MAV mode.</description>
      <entry value="128" name="MAV_MODE_FLAG_SAFETY_ARMED">
        <description>0b10000000 MAV safety set to armed. Motors are enabled / running / can start. Ready to fly. Additional note: this flag is to be ignore when sent in the command MAV_CMD_DO_SET_MODE and MAV_CMD_COMPONENT_ARM_DISARM shall be used instead. The flag can still be used to report the armed state.</description>
      </entry>
      <entry value="64" name="MAV_MODE_FLAG_MANUAL_INPUT_ENABLED">
        <description>0b01000000 remote control input is enabled.</description>
      </entry>
      <entry value="32" name="MAV_MODE_FLAG_HIL_ENABLED">
        <description>0b00100000 hardware in the loop simulation. All motors / actuators are blocked, but internal software is full operational.</description>
      </entry>
      <entry value="16" name="MAV_MODE_FLAG_STABILIZE_ENABLED">
        <description>0b00010000 system stabilizes electronically its attitude (and optionally position). It needs however further control inputs to move around.</description>
      </entry>
      <entry value="8" name="MAV_MODE_FLAG_GUIDED_ENABLED">
        <description>0b00001000 guided mode enabled, system flies waypoints / mission items.</description>
      </entry>
      <entry value="4" name="MAV_MODE_FLAG_AUTO_ENABLED">
        <description>0b00000100 autonomous mode enabled, system finds its own goal positions. Guided flag can be set or not, depends on the actual implementation.</description>
      </entry>
      <entry value="2" name="MAV_MODE_FLAG_TEST_ENABLED">
        <description>0b00000010 system has a test mode enabled. This flag is intended for temporary system tests and should not be used for stable implementations.</description>
      </entry>
      <entry value="1" name="MAV_MODE_FLAG_CUSTOM_MODE_ENABLED">
        <description>0b00000001 Reserved for future use.</description>
      </entry>
    </enum>
    <enum name="MAV_MODE_FLAG_DECODE_POSITION" bitmask="true">
      <description>These values encode the bit positions of the decode position. These values can be used to read the value of a flag bit by combining the base_mode variable with AND with the flag position value. The result will be either 0 or 1, depending on if the flag is set or not.</description>
      <entry value="128" name="MAV_MODE_FLAG_DECODE_POSITION_SAFETY">
        <description>First bit:  10000000</description>
      </entry>
      <entry value="64" name="MAV_MODE_FLAG_DECODE_POSITION_MANUAL">
        <description>Second bit: 01000000</description>
      </entry>
      <entry value="32" name="MAV_MODE_FLAG_DECODE_POSITION_HIL">
        <description>Third bit:  00100000</description>
      </entry>
      <entry value="16" name="MAV_MODE_FLAG_DECODE_POSITION_STABILIZE">
        <description>Fourth bit: 00010000</description>
      </entry>
      <entry value="8" name="MAV_MODE_FLAG_DECODE_POSITION_GUIDED">
        <description>Fifth bit:  00001000</description>
      </entry>
      <entry value="4" name="MAV_MODE_FLAG_DECODE_POSITION_AUTO">
        <description>Sixth bit:   00000100</description>
      </entry>
      <entry value="2" name="MAV_MODE_FLAG_DECODE_POSITION_TEST">
        <description>Seventh bit: 00000010</description>
      </entry>
      <entry value="1" name="MAV_MODE_FLAG_DECODE_POSITION_CUSTOM_MODE">
        <description>Eighth bit: 00000001</description>
      </entry>
    </enum>
    <enum name="MAV_STATE">
      <entry value="0" name="MAV_STATE_UNINIT">
        <description>Uninitialized system, state is unknown.</description>
      </entry>
      <entry value="1" name="MAV_STATE_BOOT">
        <description>System is booting up.</description>
      </entry>
      <entry value="2" name="MAV_STATE_CALIBRATING">
        <description>System is calibrating and not flight-ready.</description>
      </entry>
      <entry value="3" name="MAV_STATE_STANDBY">
        <description>System is grounded and on standby. It can be launched any time.</description>
      </entry>
      <entry value="4" name="MAV_STATE_ACTIVE">
        <description>System is active and might be already airborne. Motors are engaged.</description>
      </entry>
      <entry value="5" name="MAV_STATE_CRITICAL">
        <description>System is in a non-normal flight mode. It can however still navigate.</description>
      </entry>
      <entry value="6" name="MAV_STATE_EMERGENCY">
        <description>System is in a non-normal flight mode. It lost control over parts or over the whole airframe. It is in mayday and going down.</description>
      </entry>
      <entry value="7" name="MAV_STATE_POWEROFF">
        <description>System just initialized its power-down sequence, will shut down now.</description>
      </entry>
      <entry value="8" name="MAV_STATE_FLIGHT_TERMINATION">
        <description>System is terminating itself.</description>
      </entry>
    </enum>
    <enum name="MAV_COMPONENT">
      <description>Component ids (values) for the different types and instances of onboard hardware/software that might make up a MAVLink system (autopilot, cameras, servos, GPS systems, avoidance systems etc.).
      Components must use the appropriate ID in their source address when sending messages. Components can also use IDs to determine if they are the intended recipient of an incoming message. The MAV_COMP_ID_ALL value is used to indicate messages that must be processed by all components.
      When creating new entries, components that can have multiple instances (e.g. cameras, servos etc.) should be allocated sequential values. An appropriate number of values should be left free after these components to allow the number of instances to be expanded.</description>
      <entry value="0" name="MAV_COMP_ID_ALL">
        <description>Target id (target_component) used to broadcast messages to all components of the receiving system. Components should attempt to process messages with this component ID and forward to components on any other interfaces. Note: This is not a valid *source* component id for a message.</description>
      </entry>
      <entry value="1" name="MAV_COMP_ID_AUTOPILOT1">
        <description>System flight controller component ("autopilot"). Only one autopilot is expected in a particular system.</description>
      </entry>
      <!-- Component ids from 25-99 are reserved for private OEM component definitions (and may be incompatible with other private components). Note that if this range is later reduced, higher ids will be reallocated first. -->
      <entry value="25" name="MAV_COMP_ID_USER1">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="26" name="MAV_COMP_ID_USER2">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="27" name="MAV_COMP_ID_USER3">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="28" name="MAV_COMP_ID_USER4">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="29" name="MAV_COMP_ID_USER5">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="30" name="MAV_COMP_ID_USER6">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="31" name="MAV_COMP_ID_USER7">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="32" name="MAV_COMP_ID_USER8">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="33" name="MAV_COMP_ID_USER9">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="34" name="MAV_COMP_ID_USER10">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="35" name="MAV_COMP_ID_USER11">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="36" name="MAV_COMP_ID_USER12">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="37" name="MAV_COMP_ID_USER13">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="38" name="MAV_COMP_ID_USER14">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="39" name="MAV_COMP_ID_USER15">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="40" name="MAV_COMP_ID_USER16">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="41" name="MAV_COMP_ID_USER17">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="42" name="MAV_COMP_ID_USER18">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="43" name="MAV_COMP_ID_USER19">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="44" name="MAV_COMP_ID_USER20">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="45" name="MAV_COMP_ID_USER21">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="46" name="MAV_COMP_ID_USER22">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="47" name="MAV_COMP_ID_USER23">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="48" name="MAV_COMP_ID_USER24">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="49" name="MAV_COMP_ID_USER25">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="50" name="MAV_COMP_ID_USER26">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="51" name="MAV_COMP_ID_USER27">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="52" name="MAV_COMP_ID_USER28">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="53" name="MAV_COMP_ID_USER29">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="54" name="MAV_COMP_ID_USER30">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="55" name="MAV_COMP_ID_USER31">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="56" name="MAV_COMP_ID_USER32">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="57" name="MAV_COMP_ID_USER33">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="58" name="MAV_COMP_ID_USER34">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="59" name="MAV_COMP_ID_USER35">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="60" name="MAV_COMP_ID_USER36">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="61" name="MAV_COMP_ID_USER37">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="62" name="MAV_COMP_ID_USER38">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="63" name="MAV_COMP_ID_USER39">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="64" name="MAV_COMP_ID_USER40">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="65" name="MAV_COMP_ID_USER41">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="66" name="MAV_COMP_ID_USER42">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="67" name="MAV_COMP_ID_USER43">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="68" name="MAV_COMP_ID_TELEMETRY_RADIO">
        <description>Telemetry radio (e.g. SiK radio, or other component that emits RADIO_STATUS messages).</description>
      </entry>
      <entry value="69" name="MAV_COMP_ID_USER45">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="70" name="MAV_COMP_ID_USER46">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="71" name="MAV_COMP_ID_USER47">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="72" name="MAV_COMP_ID_USER48">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="73" name="MAV_COMP_ID_USER49">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="74" name="MAV_COMP_ID_USER50">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="75" name="MAV_COMP_ID_USER51">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="76" name="MAV_COMP_ID_USER52">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="77" name="MAV_COMP_ID_USER53">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="78" name="MAV_COMP_ID_USER54">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="79" name="MAV_COMP_ID_USER55">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="80" name="MAV_COMP_ID_USER56">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="81" name="MAV_COMP_ID_USER57">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="82" name="MAV_COMP_ID_USER58">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="83" name="MAV_COMP_ID_USER59">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="84" name="MAV_COMP_ID_USER60">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="85" name="MAV_COMP_ID_USER61">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="86" name="MAV_COMP_ID_USER62">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="87" name="MAV_COMP_ID_USER63">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="88" name="MAV_COMP_ID_USER64">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="89" name="MAV_COMP_ID_USER65">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="90" name="MAV_COMP_ID_USER66">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="91" name="MAV_COMP_ID_USER67">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="92" name="MAV_COMP_ID_USER68">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="93" name="MAV_COMP_ID_USER69">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="94" name="MAV_COMP_ID_USER70">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="95" name="MAV_COMP_ID_USER71">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="96" name="MAV_COMP_ID_USER72">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="97" name="MAV_COMP_ID_USER73">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="98" name="MAV_COMP_ID_USER74">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="99" name="MAV_COMP_ID_USER75">
        <description>Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network.</description>
      </entry>
      <entry value="100" name="MAV_COMP_ID_CAMERA">
        <description>Camera #1.</description>
      </entry>
      <entry value="101" name="MAV_COMP_ID_CAMERA2">
        <description>Camera #2.</description>
      </entry>
      <entry value="102" name="MAV_COMP_ID_CAMERA3">
        <description>Camera #3.</description>
      </entry>
      <entry value="103" name="MAV_COMP_ID_CAMERA4">
        <description>Camera #4.</description>
      </entry>
      <entry value="104" name="MAV_COMP_ID_CAMERA5">
        <description>Camera #5.</description>
      </entry>
      <entry value="105" name="MAV_COMP_ID_CAMERA6">
        <description>Camera #6.</description>
      </entry>
      <entry value="110" name="MAV_COMP_ID_TRACKER">
        <description>Tracker #1.</description>
      </entry>
      <entry value="111" name="MAV_COMP_ID_TRACKER2">
        <description>Tracker #2.</description>
      </entry>
      <entry value="112" name="MAV_COMP_ID_TRACKER3">
        <description>Tracker #3.</description>
      </entry>
      <entry value="113" name="MAV_COMP_ID_TRACKER4">
        <description>Tracker #4.</description>
      </entry>
      <entry value="114" name="MAV_COMP_ID_TRACKER5">
        <description>Tracker #5.</description>
      </entry>
      <entry value="115" name="MAV_COMP_ID_TRACKER6">
        <description>Tracker #6.</description>
      </entry>
      <entry value="140" name="MAV_COMP_ID_SERVO1">
        <description>Servo #1.</description>
      </entry>
      <entry value="141" name="MAV_COMP_ID_SERVO2">
        <description>Servo #2.</description>
      </entry>
      <entry value="142" name="MAV_COMP_ID_SERVO3">
        <description>Servo #3.</description>
      </entry>
      <entry value="143" name="MAV_COMP_ID_SERVO4">
        <description>Servo #4.</description>
      </entry>
      <entry value="144" name="MAV_COMP_ID_SERVO5">
        <description>Servo #5.</description>
      </entry>
      <entry value="145" name="MAV_COMP_ID_SERVO6">
        <description>Servo #6.</description>
      </entry>
      <entry value="146" name="MAV_COMP_ID_SERVO7">
        <description>Servo #7.</description>
      </entry>
      <entry value="147" name="MAV_COMP_ID_SERVO8">
        <description>Servo #8.</description>
      </entry>
      <entry value="148" name="MAV_COMP_ID_SERVO9">
        <description>Servo #9.</description>
      </entry>
      <entry value="149" name="MAV_COMP_ID_SERVO10">
        <description>Servo #10.</description>
      </entry>
      <entry value="150" name="MAV_COMP_ID_SERVO11">
        <description>Servo #11.</description>
      </entry>
      <entry value="151" name="MAV_COMP_ID_SERVO12">
        <description>Servo #12.</description>
      </entry>
      <entry value="152" name="MAV_COMP_ID_SERVO13">
        <description>Servo #13.</description>
      </entry>
      <entry value="153" name="MAV_COMP_ID_SERVO14">
        <description>Servo #14.</description>
      </entry>
      <entry value="154" name="MAV_COMP_ID_GIMBAL">
        <description>Gimbal #1.</description>
      </entry>
      <entry value="155" name="MAV_COMP_ID_LOG">
        <description>Logging component.</description>
      </entry>
      <entry value="156" name="MAV_COMP_ID_ADSB">
        <description>Automatic Dependent Surveillance-Broadcast (ADS-B) component.</description>
      </entry>
      <entry value="157" name="MAV_COMP_ID_OSD">
        <description>On Screen Display (OSD) devices for video links.</description>
      </entry>
      <entry value="158" name="MAV_COMP_ID_PERIPHERAL">
        <description>Generic autopilot peripheral component ID. Meant for devices that do not implement the parameter microservice.</description>
      </entry>
      <entry value="159" name="MAV_COMP_ID_QX1_GIMBAL">
        <deprecated since="2018-11" replaced_by="MAV_COMP_ID_GIMBAL">All gimbals should use MAV_COMP_ID_GIMBAL.</deprecated>
        <description>Gimbal ID for QX1.</description>
      </entry>
      <entry value="160" name="MAV_COMP_ID_FLARM">
        <description>FLARM collision alert component.</description>
      </entry>
      <entry value="161" name="MAV_COMP_ID_PARACHUTE">
        <description>Parachute component.</description>
      </entry>
      <entry value="169" name="MAV_COMP_ID_WINCH">
        <description>Winch component.</description>
      </entry>
      <entry value="171" name="MAV_COMP_ID_GIMBAL2">
        <description>Gimbal #2.</description>
      </entry>
      <entry value="172" name="MAV_COMP_ID_GIMBAL3">
        <description>Gimbal #3.</description>
      </entry>
      <entry value="173" name="MAV_COMP_ID_GIMBAL4">
        <description>Gimbal #4</description>
      </entry>
      <entry value="174" name="MAV_COMP_ID_GIMBAL5">
        <description>Gimbal #5.</description>
      </entry>
      <entry value="175" name="MAV_COMP_ID_GIMBAL6">
        <description>Gimbal #6.</description>
      </entry>
      <entry value="180" name="MAV_COMP_ID_BATTERY">
        <description>Battery #1.</description>
      </entry>
      <entry value="181" name="MAV_COMP_ID_BATTERY2">
        <description>Battery #2.</description>
      </entry>
      <entry value="189" name="MAV_COMP_ID_MAVCAN">
        <description>CAN over MAVLink client.</description>
      </entry>
      <entry value="190" name="MAV_COMP_ID_MISSIONPLANNER">
        <description>Component that can generate/supply a mission flight plan (e.g. GCS or developer API).</description>
      </entry>
      <entry value="191" name="MAV_COMP_ID_ONBOARD_COMPUTER">
        <description>Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on.</description>
      </entry>
      <entry value="192" name="MAV_COMP_ID_ONBOARD_COMPUTER2">
        <description>Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on.</description>
      </entry>
      <entry value="193" name="MAV_COMP_ID_ONBOARD_COMPUTER3">
        <description>Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on.</description>
      </entry>
      <entry value="194" name="MAV_COMP_ID_ONBOARD_COMPUTER4">
        <description>Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on.</description>
      </entry>
      <entry value="195" name="MAV_COMP_ID_PATHPLANNER">
        <description>Component that finds an optimal path between points based on a certain constraint (e.g. minimum snap, shortest path, cost, etc.).</description>
      </entry>
      <entry value="196" name="MAV_COMP_ID_OBSTACLE_AVOIDANCE">
        <description>Component that plans a collision free path between two points.</description>
      </entry>
      <entry value="197" name="MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY">
        <description>Component that provides position estimates using VIO techniques.</description>
      </entry>
      <entry value="198" name="MAV_COMP_ID_PAIRING_MANAGER">
        <description>Component that manages pairing of vehicle and GCS.</description>
      </entry>
      <entry value="200" name="MAV_COMP_ID_IMU">
        <description>Inertial Measurement Unit (IMU) #1.</description>
      </entry>
      <entry value="201" name="MAV_COMP_ID_IMU_2">
        <description>Inertial Measurement Unit (IMU) #2.</description>
      </entry>
      <entry value="202" name="MAV_COMP_ID_IMU_3">
        <description>Inertial Measurement Unit (IMU) #3.</description>
      </entry>
      <entry value="220" name="MAV_COMP_ID_GPS">
        <description>GPS #1.</description>
      </entry>
      <entry value="221" name="MAV_COMP_ID_GPS2">
        <description>GPS #2.</description>
      </entry>
      <entry value="236" name="MAV_COMP_ID_ODID_TXRX_1">
        <description>Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet).</description>
      </entry>
      <entry value="237" name="MAV_COMP_ID_ODID_TXRX_2">
        <description>Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet).</description>
      </entry>
      <entry value="238" name="MAV_COMP_ID_ODID_TXRX_3">
        <description>Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet).</description>
      </entry>
      <entry value="240" name="MAV_COMP_ID_UDP_BRIDGE">
        <description>Component to bridge MAVLink to UDP (i.e. from a UART).</description>
      </entry>
      <entry value="241" name="MAV_COMP_ID_UART_BRIDGE">
        <description>Component to bridge to UART (i.e. from UDP).</description>
      </entry>
      <entry value="242" name="MAV_COMP_ID_TUNNEL_NODE">
        <description>Component handling TUNNEL messages (e.g. vendor specific GUI of a component).</description>
      </entry>
      <entry value="250" name="MAV_COMP_ID_SYSTEM_CONTROL">
        <deprecated since="2018-11" replaced_by="MAV_COMP_ID_ALL">System control does not require a separate component ID. Instead, system commands should be sent with target_component=MAV_COMP_ID_ALL allowing the target component to use any appropriate component id.</deprecated>
        <description>Deprecated, don't use. Component for handling system messages (e.g. to ARM, takeoff, etc.).</description>
      </entry>
    </enum>
  </enums>
  <messages>
    <message id="0" name="HEARTBEAT">
      <description>The heartbeat message shows that a system or component is present and responding. The type and autopilot fields (along with the message component id), allow the receiving system to treat further messages from this system appropriately (e.g. by laying out the user interface based on the autopilot). This microservice is documented at https://mavlink.io/en/services/heartbeat.html</description>
      <field type="uint8_t" name="type" enum="MAV_TYPE">Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.</field>
      <field type="uint8_t" name="autopilot" enum="MAV_AUTOPILOT">Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.</field>
      <field type="uint8_t" name="base_mode" enum="MAV_MODE_FLAG" display="bitmask">System mode bitmap.</field>
      <field type="uint32_t" name="custom_mode">A bitfield for use for autopilot-specific flags</field>
      <field type="uint8_t" name="system_status" enum="MAV_STATE">System status flag.</field>
      <field type="uint8_t_mavlink_version" name="mavlink_version">MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version</field>
    </message>
    <message id="300" name="PROTOCOL_VERSION">
      <wip/>
      <!-- This message is work-in-progress and it can therefore change. It should NOT be used in stable production environments. -->
      <description>Version and capability of protocol version. This message can be requested with MAV_CMD_REQUEST_MESSAGE and is used as part of the handshaking to establish which MAVLink version should be used on the network. Every node should respond to a request for PROTOCOL_VERSION to enable the handshaking. Library implementers should consider adding this into the default decoding state machine to allow the protocol core to respond directly.</description>
      <field type="uint16_t" name="version">Currently active MAVLink version number * 100: v1.0 is 100, v2.0 is 200, etc.</field>
      <field type="uint16_t" name="min_version">Minimum MAVLink version supported</field>
      <field type="uint16_t" name="max_version">Maximum MAVLink version supported (set to the same value as version by default)</field>
      <field type="uint8_t[8]" name="spec_version_hash">The first 8 bytes (not characters printed in hex!) of the git hash.</field>
      <field type="uint8_t[8]" name="library_version_hash">The first 8 bytes (not characters printed in hex!) of the git hash.</field>
    </message>
  </messages>
</mavlink>

)"""";

#endif // LIBMAVLINK_MINIMAL_H
