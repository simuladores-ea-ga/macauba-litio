#ifndef MB_TOOLBAR_H
#define MB_TOOLBAR_H

#define TOOLBAR 0

#include <ijengine/rectangle.h>
#include <ijengine/game_object.h>

#include <vector>
#include <map>

#include "mb_piece.h"
#include "mb_button.h"

using namespace ijengine;
using std::map;
using std::vector;

class MBToolbar : public GameObject{
	public:
		MBToolbar(std::string current_level, int r, int g, int b, int n_activities, int n_ins, int n_intermediaries, int n_outs1, int n_outs2, int n_treatments, map<string, vector<int> > ids);
        void set_following(bool following);
        bool get_following();
        void do_action(string label);
        bool equals(string type, string piece_type);

        static const int TOOLBAR_DISTANCE = 210;

	protected:
		void update_self(unsigned now, unsigned last);
		void draw_self(Canvas *canvas, unsigned now, unsigned last);

	private:
		int m_r, m_g, m_b;
		int m_w, m_h, m_x, m_y;
        bool m_following;
		vector <MBPiece *> m_pieces;
        vector <MBButton *> m_buttons;
        shared_ptr<Texture> m_background;
        shared_ptr<Texture> m_rectangle;
        int m_active_rectangle;
};

#endif
