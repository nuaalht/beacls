//#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
#include "UTest_HamFunc.hpp"
#include <helperOC/helperOC.hpp>
#include <helperOC/DynSys/DubinsCar/DubinsCar.hpp>
#include <helperOC/DynSys/DynSys/DynSysSchemeData.hpp>
#include "Air3DSchemeData.hpp"
#include "Plane4DSchemeData.hpp"
using namespace helperOC;

namespace UTest_CPU_HamFunc
{
	class UnitTest_CPU_DubinsCar_RS_genericHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Vector;
		const std::string src_data_filename = std::string("./inputs/DubinsCar_RS/derivSrc_upwindFirstWENO5_15.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_1.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_2.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/DubinsCar_RS/genericHam_upwindFirstWENO5_15.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)15, (FLOAT_TYPE)18, (FLOAT_TYPE)M_PI };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-21, (FLOAT_TYPE)-18, (FLOAT_TYPE)-M_PI };
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize50(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 50, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize51(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 51, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize52(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 52, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize101(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 101, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize102(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 102, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize103(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 103, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1580(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1580, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1581(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1581, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1582(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1582, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
	class UnitTest_CPU_Air3D_air3DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Vector;
		const std::string src_data_filename = std::string("./inputs/air3D/derivSrc_upwindFirstWENO5_2.7996.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_1.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_2.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/air3D/air3DHamFunc_upwindFirstWENO5_2.7996.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+20,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI) };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-6,(FLOAT_TYPE)-10,(FLOAT_TYPE)0 };
		//! Speed of the evader(positive constant).
		const FLOAT_TYPE velocityA = 5;
		//! Speed of the pursuer(positive constant).
		const FLOAT_TYPE velocityB = 5;
		//! Maximum turn rate of the evader(positive).
		const FLOAT_TYPE inputA = 1;
		//! Maximum turn rate of the pursuer(positive).
		const FLOAT_TYPE inputB = 1;
		bool Test_CPU_Air3D_air3DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize39(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 39, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize40(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 40, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize41(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 41, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize79(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 79, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize80(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 80, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize81(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 81, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize1999(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1999, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize2000(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2000, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Air3D_air3DHamFunc_chunksize2001(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2001, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};

	class UnitTest_CPU_Plane4D_plane4DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Vector;
		const std::string src_data_filename = std::string("./inputs/plane4D/derivSrc_upwindFirstWENO5_1.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_1.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_2.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_3.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_4.mat"),
		};
		const std::string expects_filename = std::string("./inputs/plane4D/plane4Dham_upwindFirstWENO5_1.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+15,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI),(FLOAT_TYPE)12 };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-5,(FLOAT_TYPE)-10, (FLOAT_TYPE)0,     (FLOAT_TYPE)6 };
		const FLOAT_TYPE wMax = 1;
		const std::vector<FLOAT_TYPE> aranges{ (FLOAT_TYPE)0.5, 1 };
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize30(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 30, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize31(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 31, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize32(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 32, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize61(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 61, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize62(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 62, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize63(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 63, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize960(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 960, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize961(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 961, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize962(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 962, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize1921(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1921, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize1922(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1922, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize1923(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1923, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize29790(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29790, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize29791(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29791, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_CPU_Plane4D_plane4DHamFunc_chunksize29792(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29792, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
}

namespace UTest_GPU_PHASE1_HamFunc
{
	class UnitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = false;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/DubinsCar_RS/derivSrc_upwindFirstWENO5_15.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_1.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_2.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/DubinsCar_RS/genericHam_upwindFirstWENO5_15.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)15, (FLOAT_TYPE)18, (FLOAT_TYPE)M_PI };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-21, (FLOAT_TYPE)-18, (FLOAT_TYPE)-M_PI };
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize50(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 50, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize51(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 51, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize52(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 52, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize101(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 101, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize102(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 102, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize103(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 103, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1580(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1580, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1581(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1581, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1582(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1582, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
	class UnitTest_GPU_PHASE1_Air3D_air3DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = false;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/air3D/derivSrc_upwindFirstWENO5_2.7996.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_1.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_2.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/air3D/air3DHamFunc_upwindFirstWENO5_2.7996.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+20,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI) };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-6,(FLOAT_TYPE)-10,(FLOAT_TYPE)0 };
		//! Speed of the evader(positive constant).
		const FLOAT_TYPE velocityA = 5;
		//! Speed of the pursuer(positive constant).
		const FLOAT_TYPE velocityB = 5;
		//! Maximum turn rate of the evader(positive).
		const FLOAT_TYPE inputA = 1;
		//! Maximum turn rate of the pursuer(positive).
		const FLOAT_TYPE inputB = 1;
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize39(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 39, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize40(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 40, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize41(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 41, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize79(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 79, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize80(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 80, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize81(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 81, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize1999(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1999, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2000(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2000, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2001(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2001, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};

	class UnitTest_GPU_PHASE1_Plane4D_plane4DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = false;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/plane4D/derivSrc_upwindFirstWENO5_1.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_1.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_2.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_3.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_4.mat"),
		};
		const std::string expects_filename = std::string("./inputs/plane4D/plane4Dham_upwindFirstWENO5_1.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+15,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI),(FLOAT_TYPE)12 };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-5,(FLOAT_TYPE)-10, (FLOAT_TYPE)0,     (FLOAT_TYPE)6 };
		const FLOAT_TYPE wMax = 1;
		const std::vector<FLOAT_TYPE> aranges{ (FLOAT_TYPE)0.5, 1 };
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize30(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 30, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize31(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 31, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize32(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 32, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize61(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 61, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize62(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 62, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize63(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 63, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize960(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 960, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize961(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 961, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize962(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 962, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1921(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1921, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1922(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1922, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1923(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1923, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29790(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29790, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29791(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29791, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29792(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29792, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
}


namespace UTest_GPU_PHASE2_HamFunc
{
	class UnitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/DubinsCar_RS/derivSrc_upwindFirstWENO5_15.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_1.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_2.mat"),
			std::string("./inputs/DubinsCar_RS/derivC_upwindFirstWENO5_15_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/DubinsCar_RS/genericHam_upwindFirstWENO5_15.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)15, (FLOAT_TYPE)18, (FLOAT_TYPE)M_PI };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-21, (FLOAT_TYPE)-18, (FLOAT_TYPE)-M_PI };
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize50(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 50, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize51(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 51, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize52(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 52, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize101(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 101, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize102(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 102, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize103(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 103, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1580(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1580, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1581(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1581, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1582(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			DynSysSchemeData* schemeData = new DynSysSchemeData();
			DubinsCar* dubinsCar = new DubinsCar(std::vector<FLOAT_TYPE>{(FLOAT_TYPE)0, (FLOAT_TYPE)0, (FLOAT_TYPE)0}, 1., 1.);
			schemeData->dynSys = dubinsCar;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1582, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (dubinsCar) delete dubinsCar;
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
	class UnitTest_GPU_PHASE2_Air3D_air3DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/air3D/derivSrc_upwindFirstWENO5_2.7996.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_1.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_2.mat"),
			std::string("./inputs/air3D/derivC_upwindFirstWENO5_2.7996_3.mat")
		};
		const std::string expects_filename = std::string("./inputs/air3D/air3DHamFunc_upwindFirstWENO5_2.7996.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+20,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI) };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-6,(FLOAT_TYPE)-10,(FLOAT_TYPE)0 };
		//! Speed of the evader(positive constant).
		const FLOAT_TYPE velocityA = 5;
		//! Speed of the pursuer(positive constant).
		const FLOAT_TYPE velocityB = 5;
		//! Maximum turn rate of the evader(positive).
		const FLOAT_TYPE inputA = 1;
		//! Maximum turn rate of the pursuer(positive).
		const FLOAT_TYPE inputB = 1;
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize39(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 39, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize40(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 40, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize41(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 41, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize79(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 79, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize80(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 80, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize81(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 81, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize1999(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1999, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2000(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2000, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2001(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Air3DSchemeData* schemeData = new Air3DSchemeData();
			schemeData->velocityA = velocityA;
			schemeData->velocityB = velocityB;
			schemeData->inputA = inputA;
			schemeData->inputB = inputB;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2001, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};

	class UnitTest_GPU_PHASE2_Plane4D_plane4DHamFunc
	{
	public:
		const bool enable_user_defined_dynamics_on_gpu = true;
		const beacls::UVecType type = beacls::UVecType_Cuda;
		const std::string src_data_filename = std::string("./inputs/plane4D/derivSrc_upwindFirstWENO5_1.mat");
		const std::vector<std::string> src_deriv_c_filenames{
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_1.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_2.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_3.mat"),
			std::string("./inputs/plane4D/derivC_upwindFirstWENO5_1_4.mat"),
		};
		const std::string expects_filename = std::string("./inputs/plane4D/plane4Dham_upwindFirstWENO5_1.mat");
		const std::vector<FLOAT_TYPE> maxs{ (FLOAT_TYPE)+15,(FLOAT_TYPE)+10,(FLOAT_TYPE)(+2 * M_PI),(FLOAT_TYPE)12 };
		const std::vector<FLOAT_TYPE> mins{ (FLOAT_TYPE)-5,(FLOAT_TYPE)-10, (FLOAT_TYPE)0,     (FLOAT_TYPE)6 };
		const FLOAT_TYPE wMax = 1;
		const std::vector<FLOAT_TYPE> aranges{ (FLOAT_TYPE)0.5, 1 };
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize2(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 2, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize3(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 3, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize4(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 4, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize5(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 5, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize6(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 6, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize7(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 7, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize8(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 8, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize30(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 30, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize31(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 31, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize32(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 32, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize61(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 61, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize62(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 62, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize63(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 63, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize960(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 960, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize961(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 961, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize962(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 962, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1921(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1921, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1922(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1922, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1923(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 1923, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29790(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29790, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29791(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29791, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
		bool Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29792(const FLOAT_TYPE small_diff, const int num_of_threads, const int num_of_gpus) const
		{
			std::cout << __func__ << " ..." <<std::endl;
			Plane4DSchemeData* schemeData = new Plane4DSchemeData();
			schemeData->wMax = wMax;
			schemeData->aranges = aranges;
			std::string message;
			bool result = true;
			if (!run_UTest_HamFunc(
				message,
				src_data_filename, src_deriv_c_filenames, expects_filename,
				maxs, mins, schemeData, type, small_diff, 29792, num_of_threads, num_of_gpus, enable_user_defined_dynamics_on_gpu)) {
				result = false;
			}
			if (schemeData) delete schemeData;
			if (!result) {
				std::cerr << __FILE__ << ":" << __LINE__ << ":" << __func__ << std::endl;
				std::cerr << message.c_str() << std::endl;
			} else {
				std::cout << "OK" << std::endl;
			}
			return result;
		}
	};
}
int main(int argc, char *argv[])
{
	FLOAT_TYPE small_diff = 0;
	if (argc >= 2) {
	  small_diff = static_cast<FLOAT_TYPE>(atof(argv[1]));
	}
	int num_of_threads = 0;
	if (argc >= 3) {
		num_of_threads = atoi(argv[2]);
	}
	int num_of_gpus = 0;
	if (argc >= 4) {
		num_of_gpus = atoi(argv[3]);
	}

	UTest_CPU_HamFunc::UnitTest_CPU_DubinsCar_RS_genericHamFunc unitTest_CPU_DubinsCar_RS_genericHamFunc;
	UTest_CPU_HamFunc::UnitTest_CPU_Air3D_air3DHamFunc unitTest_CPU_Air3D_air3DHamFunc;
	UTest_CPU_HamFunc::UnitTest_CPU_Plane4D_plane4DHamFunc unitTest_CPU_Plane4D_plane4DHamFunc;

	UTest_GPU_PHASE1_HamFunc::UnitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc;
	UTest_GPU_PHASE1_HamFunc::UnitTest_GPU_PHASE1_Air3D_air3DHamFunc unitTest_GPU_PHASE1_Air3D_air3DHamFunc;
	UTest_GPU_PHASE1_HamFunc::UnitTest_GPU_PHASE1_Plane4D_plane4DHamFunc unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc;

	UTest_GPU_PHASE2_HamFunc::UnitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc;
	UTest_GPU_PHASE2_HamFunc::UnitTest_GPU_PHASE2_Air3D_air3DHamFunc unitTest_GPU_PHASE2_Air3D_air3DHamFunc;
	UTest_GPU_PHASE2_HamFunc::UnitTest_GPU_PHASE2_Plane4D_plane4DHamFunc unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc;
	
	size_t num_of_tests = 0;
	size_t num_of_succeeded = 0;


	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize50(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize51(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize52(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize101(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize102(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize103(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1580(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1581(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE2_DubinsCar_RS_genericHamFunc_chunksize1582(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize39(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize40(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize41(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize79(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize80(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize81(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize1999(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2000(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Air3D_air3DHamFunc.Test_GPU_PHASE2_Air3D_air3DHamFunc_chunksize2001(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize30(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize31(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize32(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize61(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize62(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize63(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize960(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize961(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize962(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1921(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1922(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize1923(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29790(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29791(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE2_Plane4D_plane4DHamFunc.Test_GPU_PHASE2_Plane4D_plane4DHamFunc_chunksize29792(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;

	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize50(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize51(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize52(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize101(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize102(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize103(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1580(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1581(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_DubinsCar_RS_genericHamFunc.Test_GPU_PHASE1_DubinsCar_RS_genericHamFunc_chunksize1582(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize39(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize40(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize41(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize79(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize80(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize81(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize1999(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2000(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Air3D_air3DHamFunc.Test_GPU_PHASE1_Air3D_air3DHamFunc_chunksize2001(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize30(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize31(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize32(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize61(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize62(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize63(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize960(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize961(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize962(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1921(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1922(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize1923(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29790(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29791(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_GPU_PHASE1_Plane4D_plane4DHamFunc.Test_GPU_PHASE1_Plane4D_plane4DHamFunc_chunksize29792(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	

	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize50(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize51(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize52(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize101(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize102(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize103(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1580(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1581(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_DubinsCar_RS_genericHamFunc.Test_CPU_DubinsCar_RS_genericHamFunc_chunksize1582(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize39(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize40(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize41(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize79(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize80(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize81(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize1999(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize2000(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Air3D_air3DHamFunc.Test_CPU_Air3D_air3DHamFunc_chunksize2001(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize1(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize2(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize3(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize4(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize5(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize6(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize7(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize8(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize30(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize31(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize32(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize61(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize62(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize63(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize960(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize961(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize962(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize1921(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize1922(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize1923(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize29790(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize29791(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;
	++num_of_tests;
	if(unitTest_CPU_Plane4D_plane4DHamFunc.Test_CPU_Plane4D_plane4DHamFunc_chunksize29792(small_diff, num_of_threads, num_of_gpus)) ++num_of_succeeded;

	if (num_of_tests == num_of_succeeded) {
		std::cout << "All test passed " << num_of_succeeded << " / " << num_of_tests << std::endl;
	} else {
		std::cout << "Passed " << num_of_succeeded << " / " << num_of_tests << std::endl;
	}


	return 0;

}

