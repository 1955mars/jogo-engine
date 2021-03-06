#pragma once

#include "Event.h"
#include <sstream>

namespace Jogo
{

	class JOGO_API MouseMovedEvent : public Event
	{
	public:
		MouseMovedEvent(float x, float y)
			:m_MouseX(x), m_MouseY(y) {}

		inline float GetX() const { return m_MouseX; }
		inline float GetY() const { return m_MouseY; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseMovedEvent: " << m_MouseX << "," << m_MouseY;
			return ss.str();
		}
		
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
		EVENT_CLASS_TYPE(MouseMoved)

	private:
		float m_MouseX, m_MouseY;
	};

	class JOGO_API MouseScrolledEvent : public Event
	{
	public:
		MouseScrolledEvent(float x, float y)
			:m_XOffset(x), m_YOffset(y) {}

		inline float GetXOffset() const { return m_XOffset; }
		inline float GetYOffset() const { return m_YOffset; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseScrolledEvent: " << GetXOffset() << "," << GetYOffset();
			return ss.str();
		}

		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
		EVENT_CLASS_TYPE(MouseScrolled)

	private:
		float m_XOffset, m_YOffset;
	};

	class JOGO_API MouseButtonEvent : public Event
	{
	public:
		MouseButtonEvent(int button) : m_Button(button) {}
		inline int GetMouseButton() const { return m_Button; }

		EVENT_CLASS_CATEGORY(EventCategoryMouseButton | EventCategoryInput)

	private:
		int m_Button;
	};

	class JOGO_API MouseButtonPressedEvent : public MouseButtonEvent
	{
	public:
		MouseButtonPressedEvent(int button) : MouseButtonEvent(button) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonPressedEvent: " << GetMouseButton();
			return ss.str();
		}

		EVENT_CLASS_TYPE(MouseButtonPressed)
	};

	class JOGO_API MouseButtonReleasedEvent : public MouseButtonEvent
	{
	public:
		MouseButtonReleasedEvent(int button) : MouseButtonEvent(button) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonReleasedEvent: " << GetMouseButton();
			return ss.str();
		}

		EVENT_CLASS_TYPE(MouseButtonReleased)
	};
}