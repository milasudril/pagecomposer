//@	{"targets":[{"name":"rectangle.hpp","type":"include"}]}

#ifndef PAGECOMPOSER_RECTANGLE_HPP
#define PAGECOMPOSER_RECTANGLE_HPP

namespace PageComposer
	{
	class Rectangle
		{
		public:
			Rectangle(float x, float y, float w, float h):m_data{x,y,w,h}
				{}

			float x() const noexcept
				{return m_data[0];}

			float& x() noexcept
				{return m_data[0];}


			float y() const noexcept
				{return m_data[1];}

			float& y() noexcept
				{return m_data[1];}


			float w() const noexcept
				{return m_data[2];}

			float& w() noexcept
				{return m_data[2];}


			float h() const noexcept
				{return m_data[3];}

			float& h() noexcept
				{return m_data[3];}

		private:
			typedef float v4sf __attribute__ ((vector_size (16)));
			v4sf m_data;
		};
	};

#endif